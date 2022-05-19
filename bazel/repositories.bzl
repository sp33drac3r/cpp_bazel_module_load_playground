load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:utils.bzl", "maybe")

def repositories():
    maybe(
        new_git_repository,
        name = "com_github_tencent_rapidjson",
        remote = "https://github.com/Tencent/rapidjson",
        commit = "2e8f5d897d9d461a7273b4b812b0127f321b1dcf",
        shallow_since = "1632477903 +0800",
        build_file = "//:BUILD.bazel",
    )

    maybe(
        new_git_repository,
        name = "com_github_tencent_rjson",
        remote = "https://github.com/Tencent/rapidjson",
        commit = "2e8f5d897d9d461a7273b4b812b0127f321b1dcf",
        shallow_since = "1632477903 +0800",
        build_file = "//:BUILD.bazel",
    )