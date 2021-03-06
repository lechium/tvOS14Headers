/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSArray;

@interface BRLTBrailleString : NSObject <NSCopying> {

	NSMutableArray* _brailleChars;

}

@property (nonatomic,readonly) NSString * unicode; 
@property (nonatomic,readonly) NSArray * brailleChars; 
@property (nonatomic,readonly) unsigned long long length; 
+(id)brfToUnicode:(id)arg1 ;
+(id)brfTable;
+(id)unicodeToBestEffortBrf:(id)arg1 ;
+(BOOL)isValidBRF:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)length;
-(NSString *)unicode;
-(id)initWithUnicode:(id)arg1 ;
-(NSArray *)brailleChars;
-(id)initWithBrailleChars:(id)arg1 ;
-(id)bestEffortBrf;
-(BOOL)isEqualToBrailleString:(id)arg1 ;
-(id)initWithBrf:(id)arg1 ;
@end

