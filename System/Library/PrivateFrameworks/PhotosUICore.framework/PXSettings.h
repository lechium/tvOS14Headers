/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:12 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PrototypeTools/PTSettings.h>

@class NSMutableSet, NSSet, NSArray;

@interface PXSettings : PTSettings {

	NSMutableSet* _archivedSettings;
	NSSet* _cachedTransientProperties;
	BOOL _hasUserDefaultsOverrides;
	long long _version;
	NSArray* _reparentedRootSettings;

}

@property (nonatomic,readonly) PXSettings * parentSettings; 
@property (nonatomic,readonly) NSArray * reparentedRootSettings;              //@synthesize reparentedRootSettings=_reparentedRootSettings - In the implementation block
@property (nonatomic,readonly) BOOL hasUserDefaultsOverrides; 
@property (nonatomic,readonly) BOOL hasDefaultValues; 
@property (assign,nonatomic) long long version;                               //@synthesize version=_version - In the implementation block
+(id)sharedInstance;
+(id)_userDefaults;
+(id)suiteName;
+(id)_defaultsKey;
+(BOOL)ignoresKey:(id)arg1 ;
+(void)setSuiteName:(id)arg1 ;
+(id)transientProperties;
+(id)_signatureDictionaryWithDefaultSettings:(id*)arg1 ;
+(id)createSharedInstance;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(void)save;
-(id)archiveDictionary;
-(void)restoreDefaultValues;
-(void)removeKeyPathObserver:(id)arg1 ;
-(void)addKeyPathObserver:(id)arg1 ;
-(BOOL)suppressesIntrospectionOnCustomerInstalls;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)archiveValueForKey:(id)arg1 ;
-(void)addKeyObserver:(id)arg1 ;
-(void)removeKeyObserver:(id)arg1 ;
-(PXSettings *)parentSettings;
-(void)performPostSaveActions;
-(void)defaultValueDidChangeForKey:(id)arg1 ;
-(BOOL)_isTransientKey:(id)arg1 ;
-(void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)arg1 andArchivedDefaultValues:(id)arg2 defaultSettings:(id)arg3 ;
-(BOOL)hasUserDefaultsOverrides;
-(BOOL)_setOverrideValuesFromDictionary:(id)arg1 ;
-(BOOL)hasDefaultValues;
-(void)clearManualOverrides;
-(void)_willArchiveSettings:(id)arg1 ;
-(void)_validateArchivableValue:(id)arg1 forKey:(id)arg2 ;
-(void)addDeferredKeyObserver:(id)arg1 ;
-(void)addDeferredKeyPathObserver:(id)arg1 ;
-(NSArray *)reparentedRootSettings;
@end

