//
//  NSString+XXExtension.m
//  XXKitDemo
//
//  Created by 王旭 on 16/5/17.
//  Copyright © 2016年 pitt. All rights reserved.
//

#import "NSString+XXExtension.h"
#import <CommonCrypto/CommonDigest.h>

@implementation NSString (XXExtension)
+ (instancetype)timeStringWithIntSecTime:(int)intSecTime {
    int hour = intSecTime / 3600;
    int min = (intSecTime - hour * 3600) / 60;
    int sec = intSecTime - hour * 3600 - min * 60;
    NSString * timeString;
    timeString = [NSString stringWithFormat:@"%02tu:%02tu:%02tu",hour,min,sec];
    return timeString;
}

+ (instancetype)timeStringWithIntMinTime:(int)intMinTime {
    int hour = intMinTime / 60;
    int min = intMinTime - hour * 60;
    NSString * timeString;
    timeString = [NSString stringWithFormat:@"%02tu:%02tu",hour,min];
    return timeString;
}
- (BOOL)isIntOrFloat {
    return [self isPureFloat]||[self isPureInt];
}

//判断是否为整形：

- (BOOL)isPureInt{
    NSScanner* scan = [NSScanner scannerWithString:self];
    int val;
    return[scan scanInt:&val] && [scan isAtEnd];
}

//判断是否为浮点形：

- (BOOL)isPureFloat{
    NSScanner* scan = [NSScanner scannerWithString:self];
    float val;
    return[scan scanFloat:&val] && [scan isAtEnd];
}

- (NSString *)md5String {
    
    CC_MD5_CTX md5;
    CC_MD5_Init (&md5);
    CC_MD5_Update (&md5, [self UTF8String], (CC_LONG)[self length]);
    
    unsigned char digest[CC_MD5_DIGEST_LENGTH];
    CC_MD5_Final (digest, &md5);
    NSString *result = [NSString stringWithFormat: @"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
                   digest[0],  digest[1],
                   digest[2],  digest[3],
                   digest[4],  digest[5],
                   digest[6],  digest[7],
                   digest[8],  digest[9],
                   digest[10], digest[11],
                   digest[12], digest[13],
                   digest[14], digest[15]];
    
    return result;
}


@end
