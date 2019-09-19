open Yojson.Basic.Util;

let extract_titles = json =>
  [json]
  |> filter_member("pages")
  |> flatten
  |> filter_member("title")
  |> filter_string;

let main = () => {
  let json = Yojson.Basic.from_channel(stdin);
  List.iter(print_endline, extract_titles(json));
};

let () = main();