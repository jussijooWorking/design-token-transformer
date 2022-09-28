
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 28 Sep 2022 09:27:53 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorColorColorsGree,
ColorColorColorsGroon
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
