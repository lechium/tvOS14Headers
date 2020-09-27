/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPFeedbackItem : NSObject <NSSecureCoding, NSCopying> {

	unsigned _itemFeedbackType;
	NSString* _itemString;

}

@property (nonatomic,readonly) NSString * itemString;                  //@synthesize itemString=_itemString - In the implementation block
@property (nonatomic,readonly) unsigned itemFeedbackType;              //@synthesize itemFeedbackType=_itemFeedbackType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForItemFeedbackType:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithItemString:(id)arg1 itemFeedbackType:(unsigned)arg2 ;
-(BOOL)isEqualToPPFeedbackItem:(id)arg1 ;
-(NSString *)itemString;
-(unsigned)itemFeedbackType;
@end
