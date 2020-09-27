/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EMFAutocompleteCandidateProvider;
#import <EmojiFoundation/EmojiFoundation-Structs.h>
@class EMFQueryLogger, NSLocale, EMFIndexManager, EMFStringStemmer, EMFQueryResultOverrideList;

@interface EMFEmojiSearchEngine : NSObject {

	const EmojiLocaleDataWrapperRef _localeData;
	EMFQueryLogger* _queryLogger;
	BOOL _enableAutocomplete;
	NSLocale* _locale;
	EMFIndexManager* _indexManager;
	EMFStringStemmer* _stringStemmer;
	id<EMFAutocompleteCandidateProvider> _autocompleteProvider;
	EMFQueryResultOverrideList* _overrideList;

}

@property (nonatomic,readonly) NSLocale * locale;                                                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) EMFIndexManager * indexManager;                                         //@synthesize indexManager=_indexManager - In the implementation block
@property (nonatomic,readonly) EMFStringStemmer * stringStemmer;                                       //@synthesize stringStemmer=_stringStemmer - In the implementation block
@property (nonatomic,readonly) id<EMFAutocompleteCandidateProvider> autocompleteProvider;              //@synthesize autocompleteProvider=_autocompleteProvider - In the implementation block
@property (nonatomic,readonly) EMFQueryResultOverrideList * overrideList;                              //@synthesize overrideList=_overrideList - In the implementation block
@property (assign,nonatomic) BOOL enableAutocomplete;                                                  //@synthesize enableAutocomplete=_enableAutocomplete - In the implementation block
+(BOOL)isLocaleSupported:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSLocale *)locale;
-(id)initWithLocale:(id)arg1 ;
-(void)preheat;
-(EMFStringStemmer *)stringStemmer;
-(EMFQueryResultOverrideList *)overrideList;
-(id)initWithLocale:(id)arg1 andAssetBundle:(id)arg2 ;
-(id)initWithLocale:(id)arg1 andIndexManager:(id)arg2 andStringStemmer:(id)arg3 andAutocompleteProvider:(id)arg4 ;
-(EMFIndexManager *)indexManager;
-(id)_performStringQueryUntokenized:(id)arg1 usingIndex:(id)arg2 ;
-(id)_performStringQueryOverride:(id)arg1 usingIndex:(id)arg2 ;
-(id)_performStringQuery:(id)arg1 usingIndex:(id)arg2 shouldAutocomplete:(BOOL)arg3 shouldStem:(BOOL)arg4 ;
-(id)performQuery:(id)arg1 usingIndex:(id)arg2 ;
-(id)_performAutocompletedQueryForQuery:(id)arg1 usingIndex:(id)arg2 ;
-(id<EMFAutocompleteCandidateProvider>)autocompleteProvider;
-(id)performStringQuery:(id)arg1 ;
-(BOOL)enableAutocomplete;
-(void)setEnableAutocomplete:(BOOL)arg1 ;
@end
