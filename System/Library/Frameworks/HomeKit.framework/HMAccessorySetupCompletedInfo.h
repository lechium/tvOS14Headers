/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface HMAccessorySetupCompletedInfo : NSObject <NSSecureCoding> {

	NSArray* _addedAccessoryUUIDs;
	NSString* _homeUUID;

}

@property (nonatomic,retain) NSArray * addedAccessoryUUIDs;              //@synthesize addedAccessoryUUIDs=_addedAccessoryUUIDs - In the implementation block
@property (nonatomic,retain) NSString * homeUUID;                        //@synthesize homeUUID=_homeUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)homeUUID;
-(NSArray *)addedAccessoryUUIDs;
-(id)initWithHome:(id)arg1 accessoryList:(id)arg2 ;
-(void)setAddedAccessoryUUIDs:(NSArray *)arg1 ;
-(void)setHomeUUID:(NSString *)arg1 ;
@end
