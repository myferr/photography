FROM photon:latest

RUN tdnf update -y && \
    tdnf install -y sudo git bash curl vim ncurses \
    gcc \
    make \
    cmake \
    binutils \
    glibc-devel \
    linux-api-headers \
    libstdc++-devel \
    ncurses-devel && \
    tdnf clean all

RUN useradd -m -s /bin/bash dev && \
    echo "dev ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

USER dev
WORKDIR /home/dev

CMD ["bash"]

RUN git clone https://github.com/fastfetch-cli/fastfetch.git /tmp/fastfetch && \
    cd /tmp/fastfetch && \
    mkdir build && cd build && \
    cmake .. && \
    make && \
    sudo make install && \
    cd / && rm -rf /tmp/fastfetch
