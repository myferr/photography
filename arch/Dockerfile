FROM archlinux/archlinux

RUN pacman -Syu --noconfirm && \
    pacman -S --noconfirm sudo curl vim git && \
    useradd -m dev && \
    echo "dev ALL=(ALL) NOPASSWD: ALL" >> /etc/sudoers

USER dev
WORKDIR /home/dev
CMD ["bash"]
