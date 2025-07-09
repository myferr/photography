# 🐧 photography

![Ubuntu](https://img.shields.io/badge/Ubuntu-latest-E95420?style=flat&logo=ubuntu&logoColor=white)
![Debian](https://img.shields.io/badge/Debian-Bookworm-A81D33?style=flat&logo=debian&logoColor=white)
![Arch](https://img.shields.io/badge/Arch_Linux-Latest-1793D1?style=flat&logo=arch-linux&logoColor=white)
![Fedora](https://img.shields.io/badge/Fedora-latest-51A2DA?style=flat&logo=fedora&logoColor=white)
![openSUSE Leap](https://img.shields.io/badge/openSUSE-Leap-73BA25?style=flat&logo=opensuse&logoColor=white)
![Tumbleweed](https://img.shields.io/badge/openSUSE-Tumbleweed-73BA25?style=flat&logo=opensuse&logoColor=white)
![RedHat UBI 10](https://img.shields.io/badge/redhat-ubi_10-A81D33?style=flat&logo=redhat&logoColor=white)


> A collection of Dockerfiles for popular Linux distributions. Launch any of them in an interactive Docker shell with one command.
> So now you can say *“I use Arch btw.”*

## Usage

1. Clone the repo:
   ```bash
   git clone https://github.com/yourusername/photography
   cd photography
   ```

2. Build & run a distro:

   ```bash
   bash ./build.sh    #  Build the script
   ./run arch         #  Run the "arch" Dockerfile
   ```

   You’ll get a fully interactive shell inside whatever OS you choose

## What's Inside?

Each folder contains:

* A `Dockerfile` with common tools preinstalled (`curl`, `vim`, `git`, `sudo`)
* A non-root user named `dev` with passwordless sudo
* Ready-to-run interactive shell environment

## Contributions Welcome

Got a distro you want added? PRs are open!
