/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSGlyphInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSFont;

@interface NSIdentityGlyphInfo : NSGlyphInfo <NSSecureCoding> {

	NSFont* _font;
	unsigned _glyph;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)glyphInfoWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_font;
-(unsigned)_glyph;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(id)initWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(unsigned short)glyph;
@end

