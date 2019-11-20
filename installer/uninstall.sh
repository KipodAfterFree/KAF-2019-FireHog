#!/usr/bin/env bash
if cmp -s "/usr/local/lib/lynx.cfg" "$(dirname $0)/lynx/lynx.cfg"; then
    rm /usr/local/lib/lynx.cfg
fi

if cmp -s "/usr/local/bin/lynx" "$(dirname $0)/lynx/lynx"; then
    rm /usr/local/bin/lynx
fi

if cmp -s "/usr/local/lib/libncurses.a" "$(dirname $0)/ncurses/libncurses.a"; then
    rm /usr/local/lib/libncurses.a
fi

if cmp -s "/usr/local/lib/libncurses_g.a" "$(dirname $0)/ncurses/libncurses_g.a"; then
    rm /usr/local/lib/libncurses_g.a
fi