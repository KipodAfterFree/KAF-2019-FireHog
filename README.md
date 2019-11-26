# FireHog

FireHog is an information security challenge in the Web/Reversing category, and was presented to participants of [KAF CTF 2019](https://ctf.kipodafterfree.com)

## Challenge story

A version of our CLASSIFIED browser that we use internally got leaked!

Download [FireHog.tar.gz]

Installation:
```bash
gunzip -c FireHog.tar.gz | docker load
docker run --rm -it firehog
```

## Challenge exploit

The user receives a version of lynx that is old and modified, and has to understand what the communication with the server is all about.
After that, recursive search over the whole website.

## Challenge solution

Recursive search (crawler) over the given links.

## Building and installing

[Clone](https://github.com/NadavTasher/2019-FireHog/archive/master.zip) the repository, then type the following command to build the container:

You can build the whole project by typing: `./export.sh` or run individual parts by running `./run-browser.sh` and `./run-web.sh`.

You will also need to add an `/etc/hosts` entry to reroute `ctf.kaf.sh` to `localhost`.

### Some very important notes:

I used the following links to update some things and get old versions of things:
1. [config.sub](http://git.savannah.gnu.org/gitweb/?p=config.git;a=blob_plain;f=config.sub;hb=HEAD)
2. [config.guess](http://git.savannah.gnu.org/gitweb/?p=config.git;a=blob_plain;f=config.guess;hb=HEAD)
3. [lynx](ftp://ftp.invisible-island.net/lynx/tarballs/lynx2.8.1rel.2.tar.gz)
4. [ncurses](https://ftp.gnu.org/pub/gnu/ncurses/ncurses-4.2.tar.gz)

## Flag

Flag is:
```flagscript
KAF{n3v3r_90nna_y33t_th1s_fla9}
```

## License
[MIT License](https://choosealicense.com/licenses/mit/)