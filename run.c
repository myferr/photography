#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#define MAX_CMD_LEN 512

int dir_exists(const char *path) {
    struct stat st;
    return stat(path, &st) == 0 && S_ISDIR(st.st_mode);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <distro>\n", argv[0]);
        return 1;
    }

    const char *distro = argv[1];
    char folder[128];
    snprintf(folder, sizeof(folder), "%s", distro);

    if (!dir_exists(folder)) {
        fprintf(stderr, "Error: Image '%s' not found.\n", folder);
        return 1;
    }

    char build_cmd[MAX_CMD_LEN];
    snprintf(build_cmd, sizeof(build_cmd), "docker build -t photography/%s ./%s", distro, folder);

    char run_cmd[MAX_CMD_LEN];
    snprintf(run_cmd, sizeof(run_cmd), "docker run -it --rm photography/%s", distro);

    printf("Building '%s'...\n", distro);
    if (system(build_cmd) != 0) {
        fprintf(stderr, "❌ Failed to build Docker image.\n");
        return 1;
    }

    printf("Running '%s'...\n", distro);
    return system(run_cmd);
}
