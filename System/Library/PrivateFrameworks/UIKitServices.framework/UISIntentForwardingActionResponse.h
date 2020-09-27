/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:34:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSActionResponse.h>

@class INIntentResponse, INIntentForwardingActionResponse;

@interface UISIntentForwardingActionResponse : BSActionResponse {

	INIntentResponse* _cachedIntentResponse;
	INIntentForwardingActionResponse* _cachedIntentForwardingActionResponse;

}

@property (nonatomic,readonly) INIntentResponse * intentResponse; 
@property (nonatomic,readonly) INIntentForwardingActionResponse * intentForwardingActionResponse; 
+(id)responseWithIntentForwardingActionResponse:(id)arg1 ;
+(id)responseWithIntentResponse:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(INIntentResponse *)intentResponse;
-(INIntentForwardingActionResponse *)intentForwardingActionResponse;
-(id)initWithIntentForwardingActionResponse:(id)arg1 ;
-(id)initWithIntentResponse:(id)arg1 ;
@end
