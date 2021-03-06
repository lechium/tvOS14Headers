/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetAppsUtilities/NetAppsUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NAIdentity : NSObject <NSCopying> {

	NSArray* _characteristics;

}

@property (nonatomic,copy) NSArray * characteristics;              //@synthesize characteristics=_characteristics - In the implementation block
+(id)na_identity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSArray *)characteristics;
-(unsigned long long)hashOfObject:(id)arg1 ;
-(BOOL)isObject:(id)arg1 equalToObject:(id)arg2 ;
-(id)initWithCharacteristics:(id)arg1 ;
@end

