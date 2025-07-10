FROM --platform=linux/amd64 clearlinux:latest@sha256:ea82c1042e56f70b697844a9060d49c87bf4193c5cb9a2f34c45ee3e756019f7

RUN swupd update -y && \
    swupd bundle-add -y make cmake git binutils devpkg-ncurses bash sudo vim && \
    swupd clean --all

RUN git clone https://github.com/fastfetch-cli/fastfetch.git /tmp/fastfetch && \
    cmake -B/tmp/fastfetch/build -S/tmp/fastfetch -DCMAKE_BUILD_TYPE=MinSizeRel && \
    cmake --build /tmp/fastfetch/build --parallel && \
    cmake --install /tmp/fastfetch/build && \
    strip /usr/local/bin/fastfetch || true && \
    rm -rf /tmp/fastfetch

RUN useradd -m -s /bin/bash dev && \
    echo "dev ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

USER dev
WORKDIR /home/dev

CMD ["bash"]
