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
        .binaryTarget(name: "GopayCheckoutKit", url: "https://github.com/veritrans/Gopay-tokenization-xcframework/releases/download/1.2.0/GopayCheckoutKit.xcframework-1.2.0.zip", checksum: "d69e878b090d51a49580bab7e78d220530a4ba8fe46ad56027914a356f6aafc9")
    ]
)
