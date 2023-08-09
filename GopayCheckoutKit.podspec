Pod::Spec.new do |s|

s.name             = "GopayCheckoutKit"
s.version          = "1.2.0"
s.summary          = "GoPay checkout sdk"
s.homepage         = "https://veritrans.co.id/"
s.license          = 'MIT'
s.author           = { "veritrans" => "dev@veritrans.co.id" }
s.source           = { :git => 'https://github.com/veritrans/Gopay-tokenization-xcframework/releases/download/1.2.0/GopayCheckoutKit.xcframework-1.2.0.zip'}
s.platform     = :ios
s.requires_arc = true
s.ios.deployment_target  = "11.0"
s.vendored_frameworks = 'GopayCheckoutKit.xcframework'

end