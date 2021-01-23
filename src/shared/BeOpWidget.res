module Styles = {
  open Css
  let container = style(list{padding2(~v=10->px, ~h=zero)})
}

@react.component
let make = () => {
  let div = React.useMemo(() =>
    <div className=Styles.container> <div className="BeOpWidget" /> </div>
  )

  div
}
