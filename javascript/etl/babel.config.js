module.exports = {
  presets: [
    [
      "@babel/preset-env",
      {
        useBuiltIns: "entry",
        corejs: "3.14",
      },
    ],
  ],
  plugins: ["@babel/plugin-syntax-bigint"],
};
