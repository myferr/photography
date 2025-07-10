FROM almalinux:latest

RUN dnf update -y && \
    dnf install -y --allowerasing curl && \
    dnf install -y sudo vim git bash make gcc gcc-c++ cmake && \
    dnf clean all && \
    rm -rf /var/cache/dnf

RUN git clone https://github.com/fastfetch-cli/fastfetch.git && \
    cd fastfetch && \
    mkdir build && cd build && \
    cmake .. && \
    make && \
    make install && \
    cd /home && \
    rm -rf fastfetch

RUN dnf remove -y make gcc gcc-c++ cmake && \
    dnf clean all && \
    rm -rf /var/cache/dnf

RUN useradd -m -s /bin/bash dev && \
    echo "dev ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

USER dev
WORKDIR /home/dev

CMD ["bash"]
