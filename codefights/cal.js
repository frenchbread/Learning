function tasksTypes(deadlines, day) {
    var todaySum = 0, upcommingSum = 0, laterSum = 0;
    deadlines.forEach(function(deadline){
        if (deadline <= day) todaySum++
        if (deadline <= day+7 && deadline > day) upcommingSum ++
        if (deadline > day + 7) laterSum ++   
    })
    return [todaySum, upcommingSum, laterSum]
}

