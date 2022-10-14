// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.
import PackageDescription

let package = Package(
    name: "GopayTokenization",
    defaultLocalization: "en",
        platforms: [
            .iOS(.v9)
        ],
    products: [
        .library(
            name: "GopayTokenization",
            targets: ["GopayCheckoutKit"])
    ],
    dependencies: [],
    targets: [
        .binaryTarget(name: "GopayCheckoutKit", url: "https://github.com/veritrans/Gopay-tokenization-xcframework/releases/download/1.0.0/GopayCheckoutKit.xcframework-1.00.zip", checksum: "a20aede3aadebbdb9440973836ff0cee4ab8bfad455d49a3aa172ba17b80eeab")
    ]
)