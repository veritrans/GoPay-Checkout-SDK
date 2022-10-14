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
        .binaryTarget(name: "GopayCheckoutKit", url: "https://github.com/veritrans/Gopay-tokenization-xcframework/releases/download/1.1.0/GopayCheckoutKit.xcframework-1.1.0.zip", checksum: "6bddfe6ab2824e7b66c739a447159a0848093dadc66439beb2a74aed4d3dd282")
    ]
)
