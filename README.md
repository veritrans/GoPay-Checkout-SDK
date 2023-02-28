# Gopay Checkout iOS SDK

iOS library to enable GoPay checkout flow via Midtrans API.

### SDK Installation

#### A. SPM Installation

1. Open your application in Xcode and select your project’s Package Dependencies tab and click the `+` button:
![Screen Shot 2023-02-28 at 12 35 00](https://user-images.githubusercontent.com/3756851/221765493-41bbbcfd-be5f-4f6c-a621-f436a61f8ab7.png)

2. Copy the SDK repository URL `https://github.com/veritrans/GoPay-Checkout-SDK` into the search field, Under Dependency Rule, select Branch: `master` (to always get the latest version), and then click Add Package.
![Screen Shot 2023-02-28 at 12 34 41](https://user-images.githubusercontent.com/3756851/221765511-21bbfc6a-2453-4c4d-97f7-211e497e3c81.png)

3. After the package download completes, select, and click Add Package.
![Screen Shot 2023-02-28 at 12 35 28](https://user-images.githubusercontent.com/3756851/221765453-52d4110a-e1d7-4508-9a31-b4151ce9654a.png)

4. It's done! Gopay Tokenization SDK should now be listed under Swift Package Dependencies in the Xcode Project navigator.
![Screen Shot 2023-02-28 at 12 39 40](https://user-images.githubusercontent.com/3756851/221765394-d7d06c19-e010-4335-b55a-357b32930d7d.png)


#### B. Manual Installation

1. Download this repo
2. Drag the `GopayCheckoutKit.xcframework` to your poroject on xcode
3. On popup, choose `copy items if needed` and `create groups` then click `finish`
4. build and run

#### C. Cocoapods installation

If you're using cocoapods, add this to your `.podfile`

```
target 'MyApp' do
  pod 'GopayCheckoutKit'
end
```

then do `pod install`


### SDK Integration

For Swift, you need to `import GopayCheckoutKit` in your AppDelegate.Swift File and every class where you plan to use the sdk method.

For Objective-C, you need to `import GopayCheckoutKit.h` in your AppDelegate.h and every class where you plan to use the sdk method.

You also need to setup your app url scheme, this is used to let the SDK go back to close the webview automatically and navigate to previous screen. For example, your app url scheme should be something like `myapp://`, all lowercased.
To setup your app url scheme , There're two ways to do this, You can choose either:

1. Go to `Project Settings` -> `Info`, and add inside `The URL Types` section a new URL scheme. Add something of the sort of `myapp` or any name you preferred, lowercased.

2. Alternatively, you can also go to your `info.plist` file and paste this code, you can rename the `myapp` value with your preferred name.

```
<key>CFBundleURLTypes</key>
    <array>
        <dict>
            <key>CFBundleTypeRole</key>
            <string>Editor</string>
            <key>CFBundleURLSchemes</key>
            <array>
                <string>myapp</string>
            </array>
        </dict>
    </array>
```

### SDK Initialization

SDK initialization can be done anywhere when you want to start to use the sdk's method. In this example, we'll use AppDelegate to setup the sdk within the `application:didfinishlaunchingwithoptions:`.

Eversince ios 13, Apple introduces `SceneDelegate`, so if your app target includes ios 13 and above, you'll also need to add the `handleCallbackUrl` on the `SceneDelegate` file within the `openURLContexts:` method.

**Important notes**

For the `callbackUrl` parameter, please use your app url scheme with this format `myapp://home`, by adding `home` to your app url scheme, as shown in the code below


##### Obj-C
AppDelegate file

```objective-c
- (BOOL) application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
...

[GPYClient  initWithMerchantServerURL:MERCHANT_SERVER_URL  merchantId:MERCHANT_ID callbackUrl:@"myapp://home" isLoggingEnabled:NO];

...
}
```

```objective-c
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options{
    
    [GPYClient handleCallbackUrl:url];
    return YES;
}
```

SceneDelegate file

```objective-c
- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)URLContexts{
    NSURL *url = URLContexts.allObjects.firstObject.URL;
    [GPYClient handleCallbackUrl:url];
}
```
##### Swift

AppDelegate File

```swift
func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        
	GPYClient.initWithMerchantServerURL(MERCHANT_SERVER_URL, merchantId: MERCHANT_ID, callbackUrl: "myapp://home", isLoggingEnabled: false)

	return true
}
```

```swift
func application(_ app: UIApplication, open url: URL, options: [UIApplication.OpenURLOptionsKey : Any] = [:]) -> Bool {

	GPYClient.handleCallbackUrl(url)
	
    return true
}
```

SceneDelegate File

```swift
func scene(_ scene: UIScene, openURLContexts URLContexts: Set<UIOpenURLContext>) {
	if let url = URLContexts.first?.url {
  	 GPYClient.handleCallbackUrl(url)
	}
}
```

### Link Account

#### Obj-C

```objective-c
GPYPartnerDetails *details = [[GPYPartnerDetails alloc]initWithPhoneNumber:@"8212345678" countryCode:@"62"];

[GPYClient linkAccountWithPaymentType:@"gopay" gopayPartnerDetails:details viewController:self completion:^(GPYLinkAccountResult * _Nullable result, NSError * _Nullable error) {
    if (result) {
        // do something
    } else{
        NSLog(@"error %@", error);
    }
}]; 

```

#### Swift

```swift
let partnerDetails = GPYPartnerDetails(phoneNumber: "812345678", countryCode: "62")
GPYClient.linkAccount(withPaymentType: "gopay", gopayPartnerDetails: partnerDetails, viewController: self) { (result, error) in
    if (result != nil){
        // do something
    } else {
        // error
    }
}
```

### Enquire Account And Payment Info

#### Obj-C

```objective-c
[GPYClient enquireAccountWithAccountID:ACCOUNT_ID completion:^(GPYAccountInfo * _Nullable result, NSError * _Nullable error) {
        if (result) {
            // do something
        } else{
            NSLog(@"error %@", error);
        }
    }];
```

#### Swift

```swift
GPYClient.enquireAccount(ACCOUNT_ID) { (result, error) in
 		if (result != nil) {
 		//do something
       	} else {
       	// error
        }
}
```

### Disable / Unlink Account

#### Obj-C

```objective-c
[GPYClient disableAccountWithAccountID:ACCOUNT_ID completion:^(GPYDisableAccountResult * _Nullable result, NSError * _Nullable error) {
        if (result) {
         // do something
        } else {
            NSLog(@"error %@", error);
        }
    }];
```

#### Swift

```swift
GPYClient.disableAccount(withAccountID: ACCOUNT_ID) { (result, error) in
	if (result != nil){
     // do something
    } else {
     // error
    }
}
```

### Create Transaction

#### Obj-C

```objective-c
GPYGopayDetails *gopayDetails = [[GPYGopayDetails alloc]initWithAccountID:ACCOUNT_ID paymentOptionToken:PAYMENT_OPTION_TOKEN];


GPYTransactionDetails *transDetails = [[GPYTransactionDetails alloc]initWithGrossAmount:@100 orderID:ORDER_ID currency:@"IDR"];

GPYCustomerDetails *customerDetails = [[GPYCustomerDetails alloc]initWithPhoneNumber:@"08123456789" firstName:@"fauzi" lastName:nil email:nil];

GPYItemDetails *itemDetails = [[GPYItemDetails alloc]initWithIthItemID:@"itemId1" name:@"one piece t-shirt" price:@100 quantity:@1 category:@"clothing"];

[GPYClient createTransactionWithPaymentType:@"gopay" viewController:self gopayDetails:gopayDetails transactionDetails:transDetails customerDetails:customerDetails itemDetails:@[itemDetails] completion:^(GPYTransactionResult * _Nullable result, NSError * _Nullable error) {
    
    if (result) {
        // do something
        // Transaction status will be set to "Pending", To actually know the latest transaction status, you should hit get transaction API
    } else {
        NSLog(@"error transaksi %@", error);
    }
}];
```

#### Swift

```swift
let gopayDetais = GPYGopayDetails(accountID: ACCOUNT_ID ?? "", paymentOptionToken: PAYMENT_OPTIONS_TOKEN ?? "")
let transDetails = GPYTransactionDetails(grossAmount: 200, orderID: "abc111", currency: "IDR")
let cusDetails = GPYCustomerDetails(phoneNumber: "088888888", firstName: "fauzi", lastName: "cihuy", email: "emailemail@gmail.com")
let itemDetails1 = GPYItemDetails(ithItemID: "aabb1", name: "one piece t-shirt", price: 100, quantity: 1, category: "shirts")
let itemDetails2 = GPYItemDetails(ithItemID: "aabb2", name: "one piece pants", price: 100, quantity: 1, category: "pants")

GPYClient.createTransaction(withPaymentType: "gopay", viewController: self, gopayDetails: gopayDetais, transactionDetails: transDetails, customerDetails: cusDetails, itemDetails: [itemDetails1, itemDetails2]) { (result, error) in
    if (result != nil) {
     	// do something
    } else {
    	// error
    }
}
```

## Gopay Checkout Response Processor

This response processor is used to help process and handle the webview if you hit the Partner API directly.

### Link Account

#### Obj-C

```objective-c
[GPYCheckoutProcessor processAccountLinkingWithResponse:linkingResponse viewController:viewController completion:^(GPYLinkAccountResult * _Nullable result, NSError * _Nullable error) {
	if (result) {
		//do something
    } else{
    	// error
    }
}];
```
#### Swift

```swift
GPYCheckoutProcessor.processAccountLinking(with: RESPONSE, viewController: self) { (result, error) in
    if (result != nil){
        // do something
    } else {
        // error
    }
}
```

### Create Transaction

#### Obj-C

```objective-c
[GPYCheckoutProcessor processCreateTransactionWithResponse:transactionResponse viewController:viewController completion:^(GPYTransactionResult * _Nullable result, NSError * _Nullable error) {
	if (result) {
       // do something
    } else {
       // error 
    }
}];
```

#### Swift

```swift
GPYCheckoutProcessor.processCreateTransaction(with: TRANSACTION_RESPONSE, viewController: self) { (result, error) in
    if (result != nil){
        // do something
    } else {
        // error
    }
}
```
