//
//  GPYCreateTransactionActions.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 01/06/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPYMappable.h"

NS_ASSUME_NONNULL_BEGIN

@interface GPYCreateTransactionActions : NSObject <GPYMappable>

@property (nonatomic, nullable) NSString *name;
@property (nonatomic, nullable) NSString *method;
@property (nonatomic, nullable) NSString *url;

@end

NS_ASSUME_NONNULL_END

