//
//  objcString.h
//  objcString
//
//  Created by FTET on 16/8/5.
//  Copyright © 2016年 vilyever. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for objcString.
FOUNDATION_EXPORT double objcStringVersionNumber;

//! Project version string for objcString.
FOUNDATION_EXPORT const unsigned char objcStringVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <objcString/PublicHeader.h>

#import <objcString/NSString+VDDate.h>
#import <objcString/NSString+VDValue.h>
#import <objcString/NSString+VDEmpty.h>
#import <objcString/NSString+Change.h>
#import <objcString/NSString+VDRegex.h>


#pragma mark VDKeyPath
#if !VDKeyPath
#define VDKeyPath(target, path) \
@(((void)(NO && ((void)target.path, NO)), # path))
#endif

#if !VDBoolToString
#define VDBoolToString(bool) \
((bool) ? @"YES" : @"NO")
#endif
