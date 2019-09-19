# practicing-reason-native

## notes

Per [discord](https://discordapp.com/channels/235176658175262720/235200837608144898/624310389735161887), to run the `Filtering.re` example:

```reason
cat library/filtering.json | esy start
```

Example comes from [yojson](https://github.com/ocaml-community/yojson/tree/master/examples)

Other examples in [RealWorldOCaml](https://discordapp.com/channels/235176658175262720/235200837608144898/624308512058638346)

To pass a file from the local directory to `yojson` use `Yojson.Basic.from_file`:

```reason
let filePath = "./library/filtering.json";
let main = () => {
  let json = Yojson.Basic.from_file(filePath);
  List.iter(print_endline, extract_titles(json));
};

let () = main();
```

I am used to calling `./filtering.json` for a file that sits next to the file with the function in it. Here I had to call it with the name of the current directory, `./library/filtering.json` for some reason.

## Usage

You need Esy, you can install the beta using [npm](https://npmjs.com):

    % npm install -g esy@latest

> NOTE: Make sure `esy --version` returns at least `0.5.8` for this project to build.

Then run the `esy` command from this project root to install and build depenencies.

    % esy

Now you can run your editor within the environment (which also includes merlin):

    % esy $EDITOR
    % esy vim

Alternatively you can try [vim-reasonml](https://github.com/jordwalke/vim-reasonml)
which loads esy project environments automatically.

After you make some changes to source code, you can re-run project's build
again with the same simple `esy` command.

    % esy

And test compiled executable (runs `scripts.tests` specified in
`package.json`):

    % esy test

Documentation for the libraries in the project can be generated with:

    % esy doc
    % open-cli `esy echo '#{self.target_dir}/default/_doc/_html/index.html'`

This assumes you have a command like [open-cli](https://github.com/sindresorhus/open-cli) installed on your system.

Shell into environment:

    % esy shell

## Create Prebuilt Release:

`esy` allows creating prebuilt binary packages for your current platform, with
no dependencies.

    % esy npm-release
    % cd _release
    % npm publish
