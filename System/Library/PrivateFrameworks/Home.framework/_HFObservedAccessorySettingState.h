/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class HMSettings, HMSetting, NSSet, NSString;

@interface _HFObservedAccessorySettingState : NSObject <NAIdentifiable> {

	HMSettings* _settings;
	HMSetting* _setting;
	NSSet* _selectionOptions;

}

@property (nonatomic,readonly) HMSettings * settings;                      //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) HMSetting * setting;                        //@synthesize setting=_setting - In the implementation block
@property (nonatomic,copy,readonly) NSSet * selectionOptions;              //@synthesize selectionOptions=_selectionOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)stateWithSettings:(id)arg1 forSetting:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(HMSettings *)settings;
-(HMSetting *)setting;
-(id)initWithSettings:(id)arg1 setting:(id)arg2 ;
-(NSSet *)selectionOptions;
@end
