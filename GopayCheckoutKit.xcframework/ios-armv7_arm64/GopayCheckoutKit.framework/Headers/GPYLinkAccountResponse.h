//
//  GPYLinkAccountResponse.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 15/04/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYLinkAccountResult.h"
#import "GPYMappable.h"
#import "GPYLinkAccountActions.h"


NS_ASSUME_NONNULL_BEGIN

@interface GPYLinkAccountResponse : GPYLinkAccountResult <GPYMappable>

@property(nonatomic, nullable) NSArray <GPYLinkAccountActions *> *actions;

@end

NS_ASSUME_NONNULL_END

