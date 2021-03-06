/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface AMSEngagementAppWhitelistModel : NSObject {

	NSDictionary* _definition;

}

@property (nonatomic,readonly) NSDictionary * definition;              //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) BOOL allowsResponse; 
+(BOOL)matchEvent:(id)arg1 toFilter:(id)arg2 ;
-(NSDictionary *)definition;
-(BOOL)matchesEvent:(id)arg1 ;
-(id)initWithCacheObject:(id)arg1 ;
-(id)exportObject;
-(id)initWithFilter:(id)arg1 allowsResponse:(BOOL)arg2 ;
-(BOOL)allowsResponse;
@end

