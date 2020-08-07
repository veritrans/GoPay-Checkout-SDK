//
//  GPYResponseProcessor.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 11/05/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYLinkAccountResponse.h"
#import "GPYTransactionResponse.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GPYCheckoutProcessor : NSObject

+ (void)processAccountLinkingWithResponse:(GPYLinkAccountResponse *)response
                           viewController:(UIViewController *)viewController
                               completion:(void (^)(GPYLinkAccountResult * _Nullable result, NSError *_Nullable error))completion;

+ (void)processCreateTransactionWithResponse:(GPYTransactionResponse *)response
                              viewController:(UIViewController *)viewController
                                  completion:(void (^)(GPYTransactionResult * _Nullable result, NSError *_Nullable error))completion;

@end

NS_ASSUME_NONNULL_END

