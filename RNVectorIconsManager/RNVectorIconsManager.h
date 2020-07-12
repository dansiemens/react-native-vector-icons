//
//  RNVectorIconsManager.h
//  RNVectorIconsManager
//
//  Created by Joel Arvidsson on 2015-05-29.
//  Copyright (c) 2015 Joel Arvidsson. All rights reserved.
//
//  MacOS support by Daniel Siemens on 2020-07-11

#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else // Compatibility for RN version < 0.40
#import "RCTBridgeModule.h"
#endif
#if __has_include(<React/RCTLog.h>)
#import <React/RCTLog.h>
#else // Compatibility for RN version < 0.40
#import "RCTLog.h"
#endif

FOUNDATION_EXPORT NSString *const RNVIErrorDomain;

enum {
  RNVIGenericError = 1000,
};

@interface RNVectorIconsManager : NSObject <RCTBridgeModule>

#if TARGET_OS_IPHONE
- (NSString *)hexStringFromColor:(UIColor *)color;
- (NSString *)generateFilePath:(NSString *)glyph withFontName:(NSString *)fontName
    withFontSize:(CGFloat)fontSize
    withColor:(UIColor *)color
    withExtraIdentifier:(NSString *)identifier;
- (BOOL)createAndSaveGlyphImage:(NSString *)glyph withFont:(UIFont *)font
    withFilePath:(NSString *)filePath
    withColor:(UIColor *)color;
#else
- (NSString *)hexStringFromColor:(NSColor *)color;
- (NSString *)generateFilePath:(NSString *)glyph withFontName:(NSString *)fontName
    withFontSize:(CGFloat)fontSize
    withColor:(NSColor *)color
    withExtraIdentifier:(NSString *)identifier;
- (BOOL)createAndSaveGlyphImage:(NSString *)glyph withFont:(NSFont *)font
    withFilePath:(NSString *)filePath
    withColor:(NSColor *)color;
#endif
@end
