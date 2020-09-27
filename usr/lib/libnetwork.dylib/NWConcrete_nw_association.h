/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libnetwork.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnetwork.dylib/libnetwork.dylib-Structs.h>
#import <libobjc.A.dylib/OS_nw_association.h>

@protocol OS_nw_endpoint, OS_nw_path_parameters, OS_nw_path_evaluator, OS_nw_path;
@class NSObject, NSString;

@interface NWConcrete_nw_association : NSObject <OS_nw_association> {

	NSObject*<OS_nw_endpoint> endpoint;
	NSObject*<OS_nw_path_parameters> path_parameters;
	NSObject*<OS_nw_path_evaluator> evaluator;
	NSObject*<OS_nw_path> previous_path;
	nw_hash_tableRef handles;
	nw_hash_tableRef connected_flow_handles;
	nw_hash_tableRef cache_entries;
	void* deactivation_timer;
	unsigned dry_run_count;
	unsigned dormant : 1;
	unsigned in_force_update : 1;
	unsigned __pad_bits : 6;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(id)redactedDescription;
@end
