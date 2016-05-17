




#if __has_include(<XXKit/XXKit.h>)

FOUNDATION_EXPORT double XXKitVersionNumber;
FOUNDATION_EXPORT const unsigned char XXKitVersionString[];

#import <XXKit/NSDate+XXExtension.h>
#import <XXKit/NSString+XXExtension.h>
#import <XXKit/UIBarButtonItem+XXExtension.h>
#import <XXKit/UIButton+XXExtension.h>
#import <XXKit/UIColor+XXExtension.h>
#import <XXKit/UIFont+XXExtension.h>
#import <XXKit/UILabel+XXExtension.h>
#import <XXKit/UIView+XXExtension.h>



#else

#import "NSDate+XXExtension.h"
#import "NSString+XXExtension.h"
#import "UIBarButtonItem+XXExtension.h"
#import "UIButton+XXExtension.h"
#import "UIColor+XXExtension.h"
#import "UIFont+XXExtension.h"
#import "UILabel+XXExtension.h"
#import "UIView+XXExtension.h"


#endif