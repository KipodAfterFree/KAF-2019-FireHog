#!/usr/bin/env bash
if cmp -s "/usr/local/lib/lynx.cfg" "$(dirname $0)/lynx.cfg"; then
    rm /usr/local/lib/lynx.cfg
fi

if cmp -s "/usr/local/bin/lynx" "$(dirname $0)/lynx"; then
    rm /usr/local/bin/lynx
fi