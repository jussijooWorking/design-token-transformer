
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Mon, 26 Sep 2022 13:16:46 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorColorColorsGree,
ColorColorColorsGroon
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
