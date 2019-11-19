# [ChallengeName]

[ChallengeName] is an information security challenge in the [Category] category, and was presented to participants of [KAF CTF 2019](https://ctf.kipodafterfree.com)

## Challenge story

Some story

## Challenge exploit

Brief exploit explanation, about 1-4 lines.

## Challenge solution

Brief write-up, to pass the idea of the solution

(Optional) Full writeup

## Building and installing

[Clone]([Repository]/archive/master.zip) the repository, then type the following command to build the container:
```bash
docker build . -t [ChallengeName]
```

To run the challenge, execute the following command:
```bash
docker run --rm -d -p 8000:80 [ChallengeName]
```

## Usage

You may now access the challenge interface through your browser: `http://localhost:8000`

## Flag

Flag is:
```flagscript
KAF{}
```

## License
[MIT License](https://choosealicense.com/licenses/mit/)