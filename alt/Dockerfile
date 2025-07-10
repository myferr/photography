FROM alt:latest

RUN apt-get update && \
    apt-get install -y \
        sudo \
        bash \
        git \
        vim-console \
        fastfetch && \

    apt-get clean && \
    rm -rf /var/lib/apt/lists/*

RUN useradd -m -s /bin/bash dev && \
    echo "dev ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

USER dev
WORKDIR /home/dev

CMD ["bash"]
