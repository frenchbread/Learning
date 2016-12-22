function smartAssigning(names, statuses, projects, tasks) {
    var assignTo = '';
    var namesArr = [];
    for (var i = 0; i < names.length-1; i++) {
        if (statuses[i] === false) {
            if (projects[lessProjects(projects)] > -1) {
                if (tasks(lessTasks(tasks) > -1)) {
                    assignTo = names[lessTasks(tasks)];
                } else {
                    assignTo = projects[lessTasks(projects)];
                }
            }
        }
    }
    function lessProjects (projects) {
        return array.indexOf(Math.min.apply(null, projects));
    }
    function lessTasks (tasks) {
        return array.indexOf(Math.min.apply(null, tasks));
    }
    
    return assignTo
} 

