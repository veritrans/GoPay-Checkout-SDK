Pod::Spec.new do |s|

    s.name             = "GopayCheckoutKit"
    s.version          = "0.1.0"
    s.summary          = "GoPay checkout sdk"
    s.homepage         = "https://veritrans.co.id/"
    s.license          = 'MIT'
    s.author           = { "veritrans" => "dev@veritrans.co.id" }
    s.source           = { :git => 'https://github.com/veritrans/GoPay-Checkout-SDK', :tag => s.version}
    s.platform     = :ios, '13.0'
    s.requires_arc = true
    s.vendored_frameworks = 'GopayCheckoutKit.xcframework'
    end
    