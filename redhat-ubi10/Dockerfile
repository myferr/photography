FROM redhat/ubi10

RUN dnf install -y sudo curl vim git gcc gcc-c++ cmake make pkgconfig libxcb-devel fontconfig-devel ncurses && \
    useradd -ms /bin/bash dev && \
    echo "dev ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers && \
    git clone --depth=1 https://github.com/fastfetch-cli/fastfetch.git /opt/fastfetch && \
    mkdir -p /opt/fastfetch/build && \
    cd /opt/fastfetch/build && \
    cmake .. && \
    make -j$(nproc) && \
    make install && \
    dnf remove -y gcc gcc-c++ cmake make pkgconfig libxcb-devel fontconfig-devel && \
    dnf clean all

USER dev
WORKDIR /home/dev
CMD ["bash"]
