/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetLabeledSettingIntentExport.h>

@class INSettingMetadata, NSString, INTemporalEventTrigger;

@interface INSetLabeledSettingIntent : INIntent <INSetLabeledSettingIntentExport>

@property (nonatomic,copy,readonly) INSettingMetadata * settingMetadata; 
@property (nonatomic,copy,readonly) NSString * labeledValue; 
@property (nonatomic,copy,readonly) INTemporalEventTrigger * temporalEventTrigger; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(INTemporalEventTrigger *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(INSettingMetadata *)settingMetadata;
-(NSString *)labeledValue;
-(void)setLabeledValue:(NSString *)arg1 ;
-(void)setSettingMetadata:(INSettingMetadata *)arg1 ;
-(id)initWithSettingMetadata:(id)arg1 labeledValue:(id)arg2 temporalEventTrigger:(id)arg3 ;
@end
