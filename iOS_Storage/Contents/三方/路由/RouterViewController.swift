//
//  RouterViewController.swift
//  iOS_Storage
//
//  Created by caiqiang on 2020/6/10.
//  Copyright © 2020 蔡强. All rights reserved.
//

import UIKit

class RouterViewController: JumpListViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
        
        self.dataArray = [ItemModel(title: "CTMediator", targetVC: CTMediatorDemoViewController())]
        
    }

}
