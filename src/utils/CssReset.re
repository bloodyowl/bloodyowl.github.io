Css.(
  global(
    fontFace(
      ~fontFamily="Madera",
      ~src=[url("/public/assets/webfonts/madera.ttf")],
      ~fontStyle=normal,
      ~fontWeight=`num(400),
      ~fontDisplay=`swap,
      (),
    )
    ->Js.String2.replaceByRe([%re "/\\}$/"], "font-display: swap;}"),
  )
);

Css.(
  global(
    fontFace(
      ~fontFamily="Madera",
      ~src=[url("/public/assets/webfonts/madera-bold.ttf")],
      ~fontStyle=normal,
      ~fontWeight=`num(700),
      ~fontDisplay=`swap,
      (),
    )
    ->Js.String2.replaceByRe([%re "/\\}$/"], "font-display: swap;}"),
  )
);

Css.(
  global(
    "body",
    [
      padding(zero),
      margin(zero),
      backgroundColor("fff"->hex),
      fontFamily(`custom(Theme.defaultTextFontFamily)),
      display(flexBox),
      flexDirection(column),
      minHeight(100.->vh),
      overflowX(hidden),
    ],
  )
);

Css.(
  global(
    "#root",
    [display(flexBox), flexDirection(column), flexGrow(1.0)],
  )
);

Css.(
  global(
    "html",
    [
      color(Theme.darkBody->hex),
      fontSize(1.->em),
      lineHeight(`abs(1.4)),
      unsafe("WebkitFontSmoothing", "antialiased"),
      unsafe("WebkitTextSizeAdjust", "100%") /* Prevent adjustments of font size after orientation changes in iOS. */
    ],
  )
);

Css.(global("*, *:before, *:after", [boxSizing(borderBox)]));
