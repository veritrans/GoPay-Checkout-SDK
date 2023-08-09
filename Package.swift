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
        .binaryTarget(name: "GopayCheckoutKit", url: "https://github.com/veritrans/Gopay-tokenization-xcframework/releases/download/1.2.0/GopayCheckoutKit.xcframework-1.2.0.zip", checksum: "eb0b6b399c02fa90f8f7ea56117ed3d6ba4fb11bd234d938fca8d47bc40b631a")
    ]
)
