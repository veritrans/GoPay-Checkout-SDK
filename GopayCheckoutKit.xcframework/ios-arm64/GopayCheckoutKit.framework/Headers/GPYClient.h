//
//  GPYClient.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 08/04/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "GPYNetworkEnums.h"
#import "GPYPartnerDetails.h"
#import "GPYGopayDetails.h"
#import "GPYTransactionDetails.h"
#import "GPYCustomerDetails.h"
#import "GPYItemDetails.h"
#import "GPYLinkAccountResult.h"
#import "GPYAccountInfo.h"
#import "GPYDisableAccountResult.h"
#import "GPYTransactionResult.h"


NS_ASSUME_NONNULL_BEGIN

@interface GPYClient : NSObject

+ (void)initWithMerchantServerURL:(NSString *)merchantServerURL
                       merchantId:(NSString*)merchantId
                      callbackUrl: (NSString *)callbackUrl
                 isLoggingEnabled:(BOOL)isLoggingEnabled;

+ (void)linkAccountWithPaymentType:(NSString *)paymentType
              gopayPartnerDetails:(GPYPartnerDetails *)gopayPartnetDetails
                   viewController:(UIViewController *)viewController
                       completion:(void (^_Nullable) (GPYLinkAccountResult *_Nullable result, NSError * _Nullable error))completion;


+ (void)enquireAccountWithAccountID:(NSString *)accountID
                                         completion:(void (^_Nullable) (GPYAccountInfo *_Nullable result, NSError * _Nullable error))completion;


+ (void)disableAccountWithAccountID:(NSString *)accountID
                        completion:(void (^ _Nullable) (GPYDisableAccountResult *_Nullable result, NSError * _Nullable error))completion;


+ (void)createTransactionWithPaymentType:(NSString *)paymentType
                         viewController:(UIViewController *)viewController
                           gopayDetails:(GPYGopayDetails *)gopayDetails
                     transactionDetails:(GPYTransactionDetails *)transactionDetails
                        customerDetails:(GPYCustomerDetails *)customerDetails
                            itemDetails:(NSArray<GPYItemDetails*> * _Nullable)itemDetails
                             completion:(void (^_Nullable) (GPYTransactionResult *_Nullable result, NSError * _Nullable error))completion;

+ (void)handleCallbackUrl:(NSURL *)url;

@end

NS_ASSUME_NONNULL_END
