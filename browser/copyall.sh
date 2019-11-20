#!/usr/bin/env bash
# Copy lynx
cp /home/lynx/lynx /mnt/lynx/lynx
cp /home/lynx/lynx.cfg /mnt/lynx/lynx.cfg
# Copy ncurses
cp /home/ncurses/lib/libncurses.a /mnt/ncurses/libncurses.a
cp /home/ncurses/lib/libncurses_g.a /mnt/ncurses/libncurses_g.a
# Change permissions
chmod 777 -R /mnt