/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class REClassLoader;

@interface RERelevanceProviderManagerLoader : NSObject {

	REClassLoader* _loader;

}
+(id)disabledRelevanceProviderManagerLoader;
+(id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 relevanceProviderManagerKey:(id)arg2 ;
+(id)relevanceProviderManagerLoaderWithDirectories:(id)arg1 ;
+(id)relevanceProviderManagerLoaderWithBlock:(/*^block*/id)arg1 ;
+(id)aggregateRelevanceProviderManagerLoaderWithrelevanceProviderManagerLoaders:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)prewarm;
-(void)enumerateBundleConfigurations:(/*^block*/id)arg1 ;
-(void)enumerationDataSourceClassesWithBlock:(/*^block*/id)arg1 ;
@end

