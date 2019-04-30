type action;

type state = {
  posts:
    Belt.Map.String.t(RequestStatus.t(Belt.Result.t(Post.t, Errors.t))),
  postList: RequestStatus.t(Belt.Result.t(array(PostShallow.t), Errors.t)),
};

let default: state;

[@react.component]
let make:
  (~url: ReasonReactRouter.url, ~initialData: state=?, unit) => React.element;
