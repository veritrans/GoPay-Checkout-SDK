//
//  GPYNetworkEnums.h
//  GopayCheckoutSDK
//
//  Created by Muhammad.Masykur on 08/04/20.
//  Copyright © 2020 Gojek. All rights reserved.
//

typedef NS_ENUM(NSUInteger, GPYEnvironment) {
    GPYEnvironmentSandbox,
    GPYEnvironmentProduction
};

typedef NS_ENUM(NSUInteger, GPYHTTPMethod) {
    GPYNetworkMethodGET,
    GPYNetworkMethodPOST,
    GPYNetworkMethodDELETE
};
