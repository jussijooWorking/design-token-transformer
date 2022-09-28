
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Wed, 28 Sep 2022 09:27:53 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
[UIColor colorWithRed:0.769f green:0.816f blue:0.804f alpha:1.000f],
[UIColor colorWithRed:0.145f green:0.820f blue:0.659f alpha:1.000f]
    ];
  });

  return colorArray;
}

@end
