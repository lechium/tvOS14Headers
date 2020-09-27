/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TUAudioRouteCollectionKey : NSObject <NSCopying> {

	NSString* _category;
	NSString* _mode;

}

@property (nonatomic,copy,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * mode;                  //@synthesize mode=_mode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)category;
-(NSString *)mode;
-(BOOL)isEqualToAudioRouteCollectionKey:(id)arg1 ;
-(id)initWithCategory:(id)arg1 mode:(id)arg2 ;
@end
